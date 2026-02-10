# Cosmic Prison Energy Calculator (v2.0)

A high-performance C++ utility designed for the Cosmic Prisons Minecraft gamemode. This tool calculates precise energy requirements for leveling high-tier items, featuring a modular architecture and deep-branching menu system.

## 🚀 Key Features
* **Modular C++ Design:** Utilizes a centralized `file.h` header to link independent logic modules for different item types.
* **Nested Menu Interface:** A robust multi-level selection system (0-3 categories, 0-8 sub-types) for efficient navigation.
* **High-Precision Calculation:** Implements 64-bit integer handling (`long long`) to accurately process massive "Energy" values.
* **Continuous Workflow:** Integrated main loop logic allowing for multiple calculations in a single session without termination.

## 🛠️ Technical Overview
* **Language:** C++17 / C++20
* **Structure:** Header-linked implementation with separate logic files for:
    * Pickaxes
    * Ore Satchels
    * Refined Satchels
* **Version History:** This is the 2nd (and most optimized) prototype, refined from a previous commercial release.

## ⚖️ License & Usage
**Copyright (c) 2026 Anthony Wernsing. All rights reserved.**

This repository is for **portfolio and code review purposes only**. 
* No part of this software may be copied, redistributed, or sold.
* Unauthorized use of this logic in a commercial or public setting is strictly prohibited.

---
*Maintained by [AnthonyWernsing](https://github.com/AnthonyWernsing)*

## 📸 Screenshots

![Main Menu](https://i.gyazo.com/ee34aff8be02f9d56dcfd232981cb594.png)
![Pickaxe](https://i.gyazo.com/2d8a2983292f6f0ee157da607fa5b07f.png)
![Ore Satchel](https://i.gyazo.com/c870b6c8f2cd5bbbe8a741f77e8aca68.png)
![Refined Satchel](https://i.gyazo.com/a8ace63bdbd0daddbedd2c298548e034.png)
![Terminate](https://i.gyazo.com/a6ba186a35f280fac411b4cc69f81ffe.png)
