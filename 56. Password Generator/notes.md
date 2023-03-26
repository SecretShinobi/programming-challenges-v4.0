# Notes

## Summary
The objective is to write a password generator, which is just a program that generates a string of random characters. 

## Info
Passwords are typically a string of characters used to confirm a user's identity. While useful for preventing unauthorized access, there are some drawbacks:
- A password used for multiple accounts makes those accounts vulnerable should the password be discovered
- It's difficult to keep track of multiple passwords for different accounts
- Short, simple passwords are easy to remember but also easy to bruteforce
- Longer, more complex passwords are more secure against bruteforcing but are easier to forget, making it easier to lose access

These drawbacks are reduced with the introduction of password managers (which eliminate the need of memorizing passwords) and password generators (which make generating secure passwords easier). 

## Requirements
> Here are the requirements the program should be able to achieve:
- Generate a string of random characters with length `n`
- Allow proram to include uppercase characters
- Allow program to include numbers
- Allow program to include special characters 

## Extras
Add the ability to generate a passphrase instead
> A passphrase is a string that contains a sequence of `n` words generated by