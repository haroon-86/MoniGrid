# MoniGrid

![AltText](power_dist.jpg)

MoniGrid is a SCADA RTU simulation tool designed for educational, professional training, and demonstration purposes. It emulates core components of SCADA environments such as RTU access control, ladder logic execution, patch monitoring, and basic protocol simulations. MoniGrid helps developers and aspiring ICS professionals understand the interaction between control centers and field devices, with an emphasis on **NERC CIP**-like cybersecurity best practices.

![AltText](monigrid_example)
## Features

- RTU Simulation with CSV-based config
- Basic authentication (NERC CIP-inspired)
- Automatic Generation Control (AGC) simulation
- Simulated industrial communication protocol messages
- Patch logging and workstation simulation
- Modular C code organized for readability and maintainability

## Technologies Used

- **C Language**
- SCADA Concepts: RTU Access, Ladder Logic, DNP3/Modbus/ICCP (conceptual)
- CLI Interface
- Platform: Windows Command Line

## System Requirements

- OS: Windows 10 or 11
- Compiler: GCC (MinGW) or Visual Studio
- Console terminal (Command Prompt or PowerShell)
  
## Project Structure
```
MoniGrid/
├── main.c # Main execution flow
├── auth.c / auth.h # Authentication logic (user/pass + RTU key)
├── rtu.c / rtu.h # RTU configuration loader and display
├── agc.c / agc.h # AGC (Automatic Generation Control) simulation
├── protocol.c / protocol.h# Simulated protocol and patch logging
├── config.csv # Sample RTU configuration data
└── logs/
└── patches.log # Runtime patch log (auto-generated)
```


## Default Credentials
```
| Credential Type | Value      |
|----------------|------------|
| Username        | `operator` |
| Password        | `monigrid` |
| RTU Key         | `RTU123`   |
```

## How to Build and Run

### Requirements
- GCC or any C compiler
- Linux/WSL/macOS or Windows with `gcc` installed

### Clone the Repository
```
git clone https://github.com/yourusername/MoniGrid.git
cd MoniGrid
```
### Compile
```
gcc main.c auth.c rtu.c agc.c protocol.c -o monigrid
```
### Run
On Windows (with GCC installed via MinGW or similar):
```
monigrid.exe
```
