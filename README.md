Simple Encryption Using XOR

COMP 211 — Data Representation: Applications of Bitwise Operators

Exploring how XOR can encode and decode information, its applications, and why simple XOR encryption is not secure.

1. XOR Fundamentals & Background

XOR (Exclusive OR) is a bitwise logical operation that compares two bits. It returns 1 when the bits are different and 0 when they are the same.

Important XOR Properties

Self-cancellation: A ^ A = 0

Identity: A ^ 0 = A

Reversibility: (A ^ B) ^ B = A

Commutativity: A ^ B = B ^ A

Associativity: (A ^ B) ^ C = A ^ (B ^ C)

XOR is useful in encryption, error detection, bit manipulation, and digital circuits.

2. How XOR Encryption Works

XOR encryption uses three components:

Plaintext (P): The original readable message.

Key (K): The value used to transform the message.

Ciphertext (C): The encrypted result.

Encryption: C = P ^ K

Decryption: P = C ^ K

XOR is reversible, meaning the same key can encrypt and decrypt a message.

Example: Encrypting the Letter A

The ASCII value of uppercase A is 65. Using 66 as the encryption key:

Plaintext:   01000001 (65)
Key:         01000010 (66)
-------------------------
Ciphertext:  00000011 (3)

Encryption: 65 ^ 66 = 3

Decryption: 3 ^ 66 = 65

Applying XOR with the same key again restores the original character, A.

3. When to Use Simple XOR Encryption

Simple XOR encryption can be useful for:

Education: Demonstrating bitwise operations, encryption, decryption, and key usage.

Reversible data obfuscation: Making nonsensitive data less immediately readable.

Games: Obfuscating nonsensitive game values or file contents.

Embedded systems: Performing inexpensive reversible transformations when actual data security is not required.

4. Is Simple XOR Secure?

Simple XOR encryption using a short or repeated key is not secure.

An 8-bit key has only 256 possible values, making it easy for an attacker to try every possible key.

Repeated keys can also expose patterns and allow attackers to recover information about the original message.

When NOT to Use Simple XOR

Passwords and personal information

Financial or medical records

Confidential network communications

Any data requiring protection against attackers

5. Coding Example

The C example demonstrates how XOR can encrypt and decrypt a character using the same key.

The program uses:

Plaintext: A (ASCII 65)

Key: 66

Encrypted result: 3

Decrypted result: A (ASCII 65)

File: xor_demo.c

How to Run

Compile the program using GCC:

gcc -Wall -Wextra -o xor_demo xor_demo.c

Run the compiled program:

./xor_demo

Expected Output

Original: A (ASCII 65)
Key: 66
Encrypted: 3
Decrypted: A (ASCII 65)

6. Conclusion & Reflection

XOR is a simple but useful operation for manipulating binary data.

The most interesting discovery was that the same XOR operation and key can both encrypt and decrypt information because XOR is reversible.

However, simple XOR encryption is vulnerable to attacks when short or repeated keys are used.

Key takeaway: XOR is useful for understanding encryption, but simple XOR encryption should not be relied upon to protect sensitive information.

7. Presentation Materials

This repository also contains the presentation slides explaining XOR fundamentals, encryption, applications, security limitations, and the C coding example.

8. Additional Resources

Presentation template: https://www.canva.com/design/DAHbOMnfjHE/bPhRhpPEE0ZzIu866DqfKA/edit

ChatGPT learning conversation: [Insert conversation link]
