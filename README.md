# VACSHINE: Shell-Based Vaccine Registry

Welcome to **VACSHINE**, a shell-based vaccine registry project designed to manage and track vaccination records. This project is implemented in C and provides a console-based interface for users to interact with the registry.

[![FORK TO TRY!](https://replit.com/badge?theme=dark&caption=FORK%20TO%20TRY!)](https://replit.com/@RikiA1/VACSHINE-Console-based-vaccine-registry)
![vacshine-demo-fast](https://github.com/Qyuzet/c-shell-based-vaccine-registry--vacshine/assets/93258081/a455b378-846d-400c-aab9-4ad4aef97fdf)


## Table of Contents

- [Introduction](#introduction)
- [Installation](#installation)
- [Usage](#usage)
- [Features](#features)
- [Demo](#demo)
- [Project Structure](#project-structure)
- [Contributing](#contributing)
- [License](#license)
- [Team Members](#team-members)
- [Contact](#contact)

## Introduction

VACSHINE is a console-based application developed in C to manage vaccination records. This project is designed to help users register, update, and view vaccination details through an interactive command-line interface. The system aims to simplify the process of managing vaccination records and ensure data accuracy and accessibility.

## Installation

To run the VACSHINE system locally, follow these steps:

1. **Clone the Repository**:
    ```bash
    git clone https://github.com/Qyuzet/c-shell-based-vaccine-registry--vacshine.git
    cd c-shell-based-vaccine-registry--vacshine
    ```

2. **Compile the Code**:
    Ensure you have a C compiler installed (e.g., GCC). Compile the source code using:
    ```bash
    gcc -o vacshine main.c
    ```

3. **Run the Application**:
    You can start the application using:
    ```bash
    ./vacshine
    ```

## Usage

Upon running the application, you will be presented with a menu of options to:

1. **Register a New User**:
    - Enter personal details such as name, age, and ID.
    - Record vaccination details including vaccine type, dose number, and date of vaccination.

2. **Update Vaccination Records**:
    - Select a registered user by ID.
    - Update vaccination details for the selected user.

3. **View Vaccination Records**:
    - Display the vaccination records of all registered users.
    - Search and view records of specific users by ID.

4. **Exit the Application**:
    - Safely exit the program and save all records to the storage file.

## Features

- **User Registration**: Collects and stores user information along with vaccination details.
- **Vaccination Update**: Allows updates to existing vaccination records.
- **Record Viewing**: Provides options to view all or specific vaccination records.
- **Data Storage**: Saves user inputs and vaccination records in a text file for persistence.
- **Interactive Console**: User-friendly command-line interface for managing records.

## Demo

You can try out the VACSHINE system directly on Replit. Fork the project and run it in your own Replit environment:

[![FORK TO TRY!](https://replit.com/badge?theme=dark&caption=FORK%20TO%20TRY!)](https://replit.com/@RikiA1/VACSHINE-Console-based-vaccine-registry)

## Project Structure

```
├── main.c                  # Main application script
├── Makefile                # Makefile for building the project
├── data                    # Directory for storing user data
│   └── records.txt         # Vaccination records file
└── README.md               # Project README file
```

## Contributing

We welcome contributions to improve the VACSHINE system. If you have suggestions for enhancements or new features, please follow these steps:

1. **Fork the Repository**: Click on the 'Fork' button on the top right corner of the repository page.
2. **Clone the Forked Repository**:
    ```bash
    git clone https://github.com/YOUR_USERNAME/c-shell-based-vaccine-registry--vacshine.git
    cd c-shell-based-vaccine-registry--vacshine
    ```
3. **Create a New Branch**:
    ```bash
    git checkout -b feature-branch
    ```
4. **Make Your Changes**: Implement your feature or bug fix.
5. **Commit Your Changes**:
    ```bash
    git add .
    git commit -m "Description of your changes"
    ```
6. **Push to Your Branch**:
    ```bash
    git push origin feature-branch
    ```
7. **Submit a Pull Request**: Go to the repository on GitHub and submit a pull request to the main branch.

## License

This project is licensed under the MIT License. See the LICENSE file for more details.

## Team Members

- Alfisyahrin Gusman (2120010016)
- Rafie Ananda Suhermawan (2120010299)
- Riki Awal Syahputra (2120010136)

## Contact

For any questions or inquiries, please contact us through the GitHub repository.

# Stay Vaccinated, Stay Safe!
