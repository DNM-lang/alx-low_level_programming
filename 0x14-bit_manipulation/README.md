# 0x14. C - Bit Manipulation

This repository contains C programs focusing on bit manipulation. Each program addresses a specific task related to working with bits.

## List of Programs

### 0. [binary_to_uint.c](0-binary_to_uint.c)
Converts a binary string to an unsigned int.
- **Prototype:** `unsigned int binary_to_uint(const char *b);`
- **Requirements:** 0 or 1 characters only. Returns 0 if invalid characters or if `b` is NULL.

### 1. [print_binary.c](1-print_binary.c)
Prints the binary representation of a number.
- **Prototype:** `void print_binary(unsigned long int n);`
- **Format:** As specified in the example. No arrays, malloc, %, or / operators.

### 2. [get_bit.c](2-get_bit.c)
Returns the value of a bit at a given index.
- **Prototype:** `int get_bit(unsigned long int n, unsigned int index);`
- **Returns:** Value of the bit at the index. Returns -1 if an error occurs.

### 3. [set_bit.c](3-set_bit.c)
Sets the value of a bit to 1 at a given index.
- **Prototype:** `int set_bit(unsigned long int *n, unsigned int index);`
- **Returns:** 1 if successful, -1 if an error occurs.

### 4. [clear_bit.c](4-clear_bit.c)
Sets the value of a bit to 0 at a given index.
- **Prototype:** `int clear_bit(unsigned long int *n, unsigned int index);`
- **Returns:** 1 if successful, -1 if an error occurs.

### 5. [flip_bits.c](5-flip_bits.c)
Returns the number of bits needed to flip to get from one number to another.
- **Prototype:** `unsigned int flip_bits(unsigned long int n, unsigned long int m);`
- **Requirements:** Not allowed to use % or / operators.

### 6. [get_endianness.c](100-get_endianness.c)
Checks the endianness of the system.
- **Prototype:** `int get_endianness(void);`
- **Returns:** 0 if big endian, 1 if little endian.

## Author

- **Dennis Njoroge (DNM-lang)**

Feel free to explore, learn, and contribute to this repository! 🌐

