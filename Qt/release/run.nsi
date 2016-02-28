!include "mui2.nsh"

outfile "Installer.exe"
installDir "$PROGRAMFILES\chemistry" 
RequestExecutionLevel admin

;Page directory
;Page instfiles
!insertmacro MUI_PAGE_DIRECTORY
!insertmacro MUI_PAGE_INSTFILES
!insertmacro MUI_LANGUAGE "SimpChinese"

section
setOutPath $INSTDIR
file Chemistry.exe
file QtCore4.dll
file QtGui4.dll
file libgcc_s_dw2-1.dll
file mingwm10.dll

setOutPath "C:\Windows\Fonts"
file cheFont.ttf

createDirectory "$SMPROGRAMS\Chemistry"

createShortCut "$DESKTOP\Chemistry.lnk" "$INSTDIR\Chemistry.exe"
createShortCut "$SMPROGRAMS\Chemistry\Chemistry.lnk" "$INSTDIR\Chemistry.exe"

writeUninstaller $INSTDIR\uninstaller.exe
createShortCut "$SMPROGRAMS\Chemistry\uninstaller.lnk" "$INSTDIR\uninstaller.exe"

sectionEnd

section "Uninstall"
rmDir /r "$INSTDIR"
rmDir /r "$SMPROGRAMS\Chemistry\"
delete "$DESKTOP\Chemistry.lnk"
sectionEnd