# comp211-xor-encryption
Exploring XOR encryption and its security limitations in C

# Simple Encryption Using XOR

## Introduction
XOR (Exclusive OR) is a bitwise operation that compares two bits and returns 1 if they differ and 0 if they are the same. In C, XOR is represented by the `^` operator.

XOR is useful because it can transform information using a key and reverse that transformation using the same key.

## What I Explored
- How XOR encodes information by combining plaintext with a key.
- How XOR decodes information by applying the same key again.
- The properties of XOR, including reversibility, self-cancellation, and identity.
- When simple XOR encryption can be useful, such as education and basic data obfuscation.
- Why simple XOR encryption is insecure, especially when using short or repeated keys.

## Interesting Discoveries
- XOR encryption and decryption use the exact same operation.
- Applying the same key twice restores the original information.
- XOR can transform characters into nonprintable ASCII values.
- An 8-bit encryption key has only 256 possible values, making it easy to brute-force.
- XOR itself is useful in cryptography, but simple XOR encryption is not secure enough to protect sensitive information.

## Code Examples
I explored XOR encryption in C using the character `A`, which has an ASCII value of 65, and a key of 66.

- Original character: A (65)
- Encryption key: 66
- Encrypted value: 3
- Decrypted character: A (65)

The program uses the `^` operator to encrypt the character and applies the same key again to decrypt it.

## How to Run
Compile the C program using GCC:

`gcc -Wall -Wextra -o xor_demo xor_demo.c`

Run the program:

`./xor_demo`

Expected output:

- Original: A (ASCII 65)
- Key: 66
- Encrypted: 3
- Decrypted: A (ASCII 65)

## Additional Resources
- Presentation Template: https://www.canva.com/design/DAHbOMnfjHE/bPhRhpPEE0ZzIu866DqfKA/edit
- ChatGPT Learning Conversation: 
- Presentation Slides: 
