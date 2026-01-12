> The file where the actual passwords for linux users are stored



## Format
```
username:password:lastchanged:mindays:maxdays:warn:inactive:expire
```

1. **Username** : A valid account name, which exist on the system.
2. **Password** : Your encrypted password is in hash format. The password should be minimum 15-20 characters long including special characters, digits, lower case alphabetic and more. Usually password format is set to $id$salt$hashed, The $id is the algorithm prefix used On GNU/Linux as follows
    1. `$1$` is [[MD5]]
    2. `$2a$` is Blowfish
    3. `$2y$` is Blowfish
    4. `$5$` is [[SHA-256]]
    5. `$6$` is SHA-512
    6. `$y$` is yescrypt
3. **Last password change (lastchanged)** : The date of the last password change, expressed as the number of days since Jan 1, 1970 (Unix time). The value 0 has a special meaning, which is that the user should change her password the next time she will log in the system. An empty field means that password aging features are disabled.
4. **Minimum** : The minimum number of days required between password changes i.e. the number of days left before the user is allowed to change her password again. An empty field and value 0 mean that there are no minimum password age.
5. **Maximum** : The maximum number of days the password is valid, after that user is forced to change her password again.
6. **Warn** : The number of days before password is to expire that user is warned that his/her password must be changed
7. **Inactive** : The number of days after password expires that account is disabled.
8. **Expire** : The date of expiration of the account, expressed as the number of days since Jan 1, 1970.