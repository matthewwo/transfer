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
Simple shell script help transfer files from one machine to another remote machine. Note that this script requires BSD netcat!

This utility is handy for transferring file to machines on same / different networks.

---

### Usage
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

===

#### Other usage

###### Version of transfer
```bash
$ ./transfer -v
Transfer v.1.0 by PrankyMat Feb-20-2015
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

### Troubleshooting
You may encounter error when using ```./transfer``` in your bash, here are some possible solutions:

#### Permission denied when calling ```./transfer```
##### Symptom
```bash
$ ./transfer
-bash: ./t: Permission denied
```
##### Possible solution
Add permission to execute ```transfer```
```bash
$ chmod +x transfer
```
```bash
$ sudo chmod +x transfer
```
===

#### Permission denined when transmitting file
##### Symptom
```bash
$ ./transfer -Tf file -h host
./transfer: line 95: file: Permission denied
```
##### Possible solution
Sudo transfer
```bash
$ sudo ./transfer -Tf file -h host
```

===

### Contribution
Please provide any feedback at the issue page of this repo. Thanks!
