# Caches
Verilog open-source cache implementations

## Synopsis
This project is indended to be a playground of sorts where the author attempts to apply theoretical aspects of CPU design to build a variety of cache designs coupled with an inherent SRAM which could at any moment be replaced by a DRAM controller and physical DRAM memory.
The project is intended to be synthesizable; the FPGA used by the author is the classic Spartan3E XC3S500 with a DVK600 Board and various extension modules.

## Motivation
The primary engine behind the writing of this project is to develop a sense of breadth of scope in implementing various **Verilog** designs aimed at building up confidence towards the implementation of a fully functional CPU like ORSoC. The first step is confidently building a clearly documented, fully-pipelined, RISC MCU/MPU hybrid device which can be thoroughly tested and used in various embedded applications.  

## Installation
git clone the required files and open the .xise in Xilinx ISE Project Navigator, preferably version 12.2 or above.

## Tests
Limited TDD was employed during the writing of the modules. All Verilog **.v** files have testbenches associated with them, at a minimum with a FAIL or OK message describing the summary of the tests.

## Contributors
The sole contributor is **Dragos-Ronald Rugescu**. Anyone wishing to contribute is kindly asked to at least fork this project, and perhaps notify the author, because he is curious :).

## License

The MIT License (MIT)

Copyright (c) 2015 Dragos-Ronald Rugescu, ADDA Ltd.

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
