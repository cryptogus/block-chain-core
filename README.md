# Blockchain

## Install Golang in Ubuntu 22.04

2024.05.11
reference: https://go.dev/doc/install

```bash
# https://go.dev/dl/ - All releases
$ wget https://go.dev/dl/go1.22.3.linux-amd64.tar.gz
$ sudo su # The commands below require root privileges.
$ rm -rf /usr/local/go && tar -C /usr/local -xzf go1.22.3.linux-amd64.tar.gz
$ exit # Exiting the root shell

$ sudo vi ~/.bashrc
```
- .bashrc
    Add `export PATH=$PATH:/usr/local/go/bin`
    ```shell
    export PATH=$PATH:/usr/local/go/bin
    ```
```bash
$ source ~/.bashrc
$ go version
go version go1.22.3 linux/amd64
```