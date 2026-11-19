
int main(void) {
    char plaintext = 'A';       // ASCII value: 65
    unsigned char key = 66;

    // Encrypt
    char encrypted = plaintext ^ key;

    // Decrypt
    char decrypted = encrypted ^ key;

    printf("Original: %c (ASCII %d)\n", plaintext, plaintext);
    printf("Key: %d\n", key);
    printf("Encrypted: %d\n", encrypted);
    printf("Decrypted: %c (ASCII %d)\n", decrypted, decrypted);

    return 0;
}
