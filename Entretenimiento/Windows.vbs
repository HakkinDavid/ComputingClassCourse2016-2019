X=MsgBox("Windows será actualizado a Windows 11",0+64,"Herramienta de actualización a Windows 11")
X=MsgBox("Guarda todo tu trabajo antes de comenzar",0+48,"Herramienta de actualización a Windows 11")
X=MsgBox("Descargando actualización...",0+32,"Herramienta de actualización a Windows 11")
X=MsgBox("0%",0+64,"Herramienta de actualización a Windows 11")
X=MsgBox("50%",0+64,"Herramienta de actualización a Windows 11")
X=MsgBox("80%",0+64,"Herramienta de actualización a Windows 11")
X=MsgBox("85%",0+64,"Herramienta de actualización a Windows 11")
X=MsgBox("90%",0+64,"Herramienta de actualización a Windows 11")
X=MsgBox("95%",0+64,"Herramienta de actualización a Windows 11")
X=MsgBox("97%",0+64,"Herramienta de actualización a Windows 11")
X=MsgBox("98%",0+64,"Herramienta de actualización a Windows 11")
X=MsgBox("99%",0+64,"Herramienta de actualización a Windows 11")
X=MsgBox("99.9%",0+64,"Herramienta de actualización a Windows 11")
X=MsgBox("Conectando con update.microsoft.com",0+64,"Herramienta de actualización a Windows 11")
X=MsgBox("Descarga corrupta",0+16,"Herramienta de actualización a Windows 11")
X=MsgBox("Comprobando datos descargados",0+16,"Herramienta de actualización a Windows 11")
X=MsgBox("ERROR: 13MB de explorer.exe corruptos",0+16,"Herramienta de actualización a Windows 11")
X=MsgBox("¿Instalar actualización?",4+32,"Herramienta de actualización a Windows 11")
X=MsgBox("Instalando",0+64,"Herramienta de actualización a Windows 11")
X=MsgBox("0%",0+64,"Herramienta de actualización a Windows 11")
X=MsgBox("100%",0+64,"Herramienta de actualización a Windows 11")
Set OpSysSet = GetObject("winmgmts:{authenticationlevel=Pkt," _
     & "(Shutdown)}").ExecQuery("select * from Win32_OperatingSystem where "_
     & "Primary=true")
for each OpSys in OpSysSet
    retVal = OpSys.Reboot()
next