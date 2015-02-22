# transfer (Rewritten in C)
---
### <font color='red'>Warning: unstable branch</font>

<font color='red'>
Note that transfer will compile but will not work as the bash version on master branch.

If intended to install for real usage, checkout ```master``` branch instead.
</font>

---

Transfer files between UNIX machines using nc.

### Description

```transfer``` rewritten in c, providing more stable and functional features that otherwise bash ```transfer``` cannot be done.

---

### Usage
#### Sending single file
#### On sender side
```bash
$ transfer -Tf file -h hostname -p port
```
or without defining port (Defaults to 1313)
```bash
$ transfer -Tf file -h hostname
```

#### On receiver side
```bash
$ transfer -Rf file -p port
```
or without defining port (Defaults to 1313)
```bash
$ transfer -Rf file
```

#### Sending multiple files with wildcard
```bash
$ transfer -T -h host -p port *  // send all files in dir to host through port
```

===

#### Other usage

###### Version of transfer

```bash
$ ./transfer -v
Transfer v.1.1
```

---

### Install
```transfer``` is a shell executable and is ready to run out of the box.

To start, first clone this repository:
```bash
$ git clone https://github.com/prankymat/transfer.git  # clone this repo
```

Then navigate to transfer's root directory using ```cd```:
```bash
$ cd transfer/
```

```transfer``` is now ready to use!

```bash
$ ./transfer -Tf file -h hostname  # will transmit file to hostname through port 1313
```

#### Optionally you can move transfer to /bin/ or ~/bin/
If you wish to access ```transfer``` in different directories,
you can move ```transfer``` to ```/bin/``` or ```~/bin/```

```bash
$ mv transfer /bin/transfer
```

```bash
$ mv transfer ~/bin/transfer
```

After moving ```transfer``` to /bin/ or ~/bin/ you can simply invoke ```transfer``` anywhere.
```bash
$ transfer -Tf file -h hostname  # no more annoying './' :)
```

---

### Error handling
Provides descriptive error messages:

```
[Error] Code:100 Type:'Missing arguments'
	- Message:'Transfer operation not defined, please use flags -R for receive or -T for transmit.'
```

```
[Error] Code:101 Type:'Missing arguments'
	- Message:'Receive operation allows only one file output, got 2 instead.'
```

```
[Error] Code:102 Type:'Missing arguments'
	- Message:'Transfer operation requires at least one file output, got 0 instead'
```

```transfer``` exits with status codes, enabling external error handling.

### Contribution
Please fork this repo and provide any feedback on the issue page. Thanks!
