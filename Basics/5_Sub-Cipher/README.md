# Substition Cipher Algorithm

A program that takes a string as input and encrypts it using a simple substition cipher and then decrypts it again.

# Algorithm
* Create 2 arrays , one for the plain text alphabets and one for the corresponding encrypted alphabet.
* Iterate through each character in the input string.
* Find the index of the character in the plain text alphabet array.
* Use this index to look up the correspondig string with the encrypted alphabet array.
* Replace the character in the input string wuth correspondig=ng encrypted character.
* Repeat steps 2-5 for all characters in the input string.
* The corresponding string is the encrypted message.

Tp decrypt the message, simply reverse the subscription process by using the encrypted alphabet array to look up the corresponding plain text.
