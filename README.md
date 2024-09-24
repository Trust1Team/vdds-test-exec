# VDDS Executable Stub

The VDDS module is an external native application.
The Trust1Connector has a `vdds` module that support the following use cases:
- VDDS Data Import
- VDDS Data Export
- VDDS Launch Viewer

The executable names are fixed for every installation, but the location can differ on the Operating system. 
The T1C VDDS interface allows the execution of VDDS commands specified above, in a controlled and safe way.

# Prerequisites
The file-exchange module has been used to setup the required `entity-type` and `entity` definitions.
This project contains stubbed executables for testing purpose.

# Remarks form the specifications
The .ini file must be mapped using the file-exchange module. 
The init file contains the paths for the executeables.

```
PATDATIMPORT=C:\VisiQuick\Vdds_PatDatImport.exe
MMOINFEXPORT=C:\VisiQuick\Vdds_MmoInfExport.exe
MMOVIEW=C:\VisiQuick\Vdds_MmoView.exe
```

For import/export a file-path is expected as an argument:
```
C:\VisiQuick\Vdds_PatDatImport.exe c:\VisiquickData\custom.ini
C:\VisiQuick\Vdds_MmoInfExport.exe C:\VisiquickData\custom.ini
```

For view an image reference (string-based) is expected as an argument
```
C:\VisiQuick\Vdds_MmoView.exe 1_10000_3
```

# Build

```shell
mkdir build
cd build
cmake ..
cmake --build .
```

The ./build/ folder will contain 3 executables:
- Vdds_PatDatImport (.exe for Windows)
- Vdds_MmoInfExport (.exe for Windows)
- Vdds_MmoView (.exe for Windows)