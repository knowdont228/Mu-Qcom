INF MdeModulePkg/Core/Dxe/DxeMain.inf
INF ArmPkg/Drivers/CpuDxe/CpuDxe.inf
INF MdeModulePkg/Core/RuntimeDxe/RuntimeDxe.inf
INF MdeModulePkg/Universal/SecurityStubDxe/SecurityStubDxe.inf
 
#INF Binaries/apollo/QcomPkg/Drivers/SecRSADxe/SecRSADxe.inf
#INF Binaries/apollo/QcomPkg/Drivers/ASN1X509Dxe/ASN1X509Dxe.inf
#INF Binaries/apollo/QcomPkg/Drivers/VerifiedBootDxe/VerifiedBootDxe.inf
#INF Binaries/apollo/MiPkg/Protocol/MiToken/MiToken.inf

INF Binaries/apollo/QcomPkg/Drivers/TzDxe/ScmDxeLA.inf
INF Binaries/apollo/QcomPkg/Drivers/TzDxe/TzDxeLA.inf

INF MdeModulePkg/Universal/WatchdogTimerDxe/WatchdogTimer.inf
INF MdeModulePkg/Universal/CapsuleRuntimeDxe/CapsuleRuntimeDxe.inf
INF MdeModulePkg/Universal/ReportStatusCodeRouter/RuntimeDxe/ReportStatusCodeRouterRuntimeDxe.inf
INF MdeModulePkg/Universal/StatusCodeHandler/RuntimeDxe/StatusCodeHandlerRuntimeDxe.inf
INF MdeModulePkg/Universal/Variable/RuntimeDxe/VariableRuntimeDxe.inf

INF Binaries/apollo/QcomPkg/Drivers/EmbeddedMonotonicCounter/EmbeddedMonotonicCounter.inf
INF Binaries/apollo/QcomPkg/Drivers/SimpleTextInOutSerialDxe/SimpleTextInOutSerial.inf
INF Binaries/apollo/QcomPkg/Drivers/ResetRuntimeDxe/ResetRuntimeDxe.inf

INF EmbeddedPkg/RealTimeClockRuntimeDxe/RealTimeClockRuntimeDxe.inf
INF EmbeddedPkg/MetronomeDxe/MetronomeDxe.inf
INF MdeModulePkg/Universal/PrintDxe/PrintDxe.inf
INF MdeModulePkg/Universal/DevicePathDxe/DevicePathDxe.inf
INF MdeModulePkg/Universal/Console/ConPlatformDxe/ConPlatformDxe.inf
INF MdeModulePkg/Universal/Console/ConSplitterDxe/ConSplitterDxe.inf
INF MdeModulePkg/Universal/Console/GraphicsConsoleDxe/GraphicsConsoleDxe.inf
INF MdeModulePkg/Universal/HiiDatabaseDxe/HiiDatabaseDxe.inf

INF Binaries/apollo/QcomPkg/Drivers/FontDxe/FontDxe.inf
INF Binaries/apollo/QcomPkg/Drivers/EnvDxe/EnvDxe.inf
INF Binaries/apollo/QcomPkg/Drivers/QcomWDogDxe/QcomWDogDxe.inf

INF ArmPkg/Drivers/ArmGic/ArmGicDxe.inf
INF ArmPkg/Drivers/TimerDxe/TimerDxe.inf
INF ArmPkg/Drivers/ArmPsciMpServicesDxe/ArmPsciMpServicesDxe.inf

INF Binaries/apollo/QcomPkg/Drivers/ChipInfoDxe/ChipInfoDxe.inf
INF Binaries/apollo/QcomPkg/Drivers/SmemDxe/SmemDxe.inf
INF Binaries/apollo/QcomPkg/Drivers/ULogDxe/ULogDxe.inf
INF Binaries/apollo/QcomPkg/Drivers/NpaDxe/NpaDxe.inf
INF Binaries/apollo/QcomPkg/Drivers/CmdDbDxe/CmdDbDxe.inf
INF Binaries/apollo/QcomPkg/Drivers/PwrUtilsDxe/PwrUtilsDxe.inf
INF Binaries/apollo/QcomPkg/Drivers/RpmhDxe/RpmhDxe.inf

!if $(USE_DISPLAYDXE) == 1
	INF Binaries/apollo/QcomPkg/Drivers/CPRDxe/CPRDxe.inf
!endif

INF Binaries/apollo/QcomPkg/Drivers/PdcDxe/PdcDxe.inf
INF Binaries/apollo/MdeModulePkg/Universal/Disk/DiskIoDxe/DiskIoDxe.inf
INF Binaries/apollo/MdeModulePkg/Universal/Disk/PartitionDxe/PartitionDxe.inf

INF FatPkg/EnhancedFatDxe/Fat.inf
INF MdeModulePkg/Universal/Disk/UnicodeCollation/EnglishDxe/EnglishDxe.inf
INF MdeModulePkg/Universal/FvSimpleFileSystemDxe/FvSimpleFileSystemDxe.inf

INF Binaries/apollo/QcomPkg/Drivers/DALSYSDxe/DALSYSDxe.inf
INF Binaries/apollo/QcomPkg/Drivers/ClockDxe/ClockDxe.inf
INF Binaries/apollo/QcomPkg/Drivers/VcsDxe/VcsDxe.inf
INF Binaries/apollo/QcomPkg/Drivers/HALIOMMUDxe/HALIOMMUDxe.inf
INF Binaries/apollo/QcomPkg/Drivers/HWIODxe/HWIODxe.inf
INF Binaries/apollo/QcomPkg/Drivers/GpiDxe/GpiDxe.inf
INF Binaries/apollo/QcomPkg/Drivers/I2CDxe/I2CDxe.inf
INF Binaries/apollo/QcomPkg/Drivers/SPIDxe/SPIDxe.inf
INF Binaries/apollo/QcomPkg/Drivers/SPMIDxe/SPMIDxe.inf
INF Binaries/apollo/QcomPkg/Drivers/SdccDxe/SdccDxe.inf
INF Binaries/apollo/QcomPkg/Drivers/UFSDxe/UFSDxe.inf
INF Binaries/apollo/QcomPkg/Drivers/TLMMDxe/TLMMDxe.inf

# Only used for DisplayDxe for Qualcomm Demura
#INF Binaries/apollo/QcomPkg/Drivers/FeatureEnablerDxe/FeatureEnablerDxe.inf

INF Binaries/apollo/QcomPkg/Drivers/VibratorDxe/VibratorDxe.inf

!if $(USE_DISPLAYDXE) == 1
	INF Binaries/apollo/QcomPkg/Drivers/DisplayDxe/DisplayDxe.inf
!else
	INF QcomPkg/Drivers/SimpleFbDxe/SimpleFbDxe.inf
!endif

INF Binaries/apollo/QcomPkg/Drivers/PlatformInfoDxe/PlatformInfoDxe.inf
INF Binaries/apollo/QcomPkg/Drivers/ButtonsDxe/ButtonsDxe.inf
INF Binaries/apollo/QcomPkg/Drivers/PmicDxe/PmicDxeLa.inf
INF Binaries/apollo/QcomPkg/Drivers/ChargerExDxe/ChargerExDxe.inf
INF Binaries/apollo/QcomPkg/Drivers/QcomChargerDxe/QcomChargerDxeLA.inf
INF Binaries/apollo/QcomPkg/Drivers/UsbPwrCtrlDxe/UsbPwrCtrlDxe.inf
INF Binaries/apollo/QcomPkg/Drivers/AdcDxe/AdcDxe.inf
INF Binaries/apollo/QcomPkg/Drivers/TsensDxe/TsensDxe.inf
INF Binaries/apollo/QcomPkg/Drivers/LimitsDxe/LimitsDxe.inf
INF Binaries/apollo/QcomPkg/Drivers/DDRInfoDxe/DDRInfoDxe.inf
INF Binaries/apollo/QcomPkg/Drivers/UsbfnDwc3Dxe/UsbfnDwc3Dxe.inf
INF Binaries/apollo/QcomPkg/Drivers/XhciPciEmulationDxe/XhciPciEmulationDxe.inf
INF Binaries/apollo/QcomPkg/Drivers/XhciDxe/XhciDxe.inf
INF Binaries/apollo/QcomPkg/Drivers/UsbBusDxe/UsbBusDxe.inf
INF Binaries/apollo/QcomPkg/Drivers/UsbKbDxe/UsbKbDxe.inf

INF MdeModulePkg/Bus/Usb/UsbMouseAbsolutePointerDxe/UsbMouseAbsolutePointerDxe.inf

INF Binaries/apollo/QcomPkg/Drivers/UsbMassStorageDxe/UsbMassStorageDxe.inf
INF Binaries/apollo/QcomPkg/Drivers/UsbMsdDxe/UsbMsdDxe.inf
INF Binaries/apollo/QcomPkg/Drivers/UsbDeviceDxe/UsbDeviceDxe.inf
INF Binaries/apollo/QcomPkg/Drivers/UsbConfigDxe/UsbConfigDxe.inf
INF Binaries/apollo/QcomPkg/Drivers/UsbInitDxe/UsbInitDxe.inf
INF Binaries/apollo/QcomPkg/Drivers/HashDxe/HashDxe.inf
INF Binaries/apollo/QcomPkg/Drivers/CipherDxe/CipherDxe.inf
INF Binaries/apollo/QcomPkg/Drivers/MacDxe/MacDxe.inf
INF Binaries/apollo/QcomPkg/Drivers/RNGDxe/RngDxe.inf

INF MdeModulePkg/Universal/BdsDxe/BdsDxe.inf
INF MdeModulePkg/Universal/PCD/Dxe/Pcd.inf

INF Binaries/apollo/QcomPkg/Drivers/PILDxe/PILDxe.inf
INF Binaries/apollo/QcomPkg/Drivers/PILProxyDxe/PILProxyDxe.inf
INF Binaries/apollo/QcomPkg/Drivers/SPSSDxe/SPSSDxe.inf
INF Binaries/apollo/QcomPkg/Application/QcomChargerApp/QcomChargerApp.inf
INF Binaries/apollo/QcomPkg/Drivers/ShmBridgeDxe/ShmBridgeDxeLA.inf
