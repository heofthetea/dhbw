> Get [[SSL certificate]] without LetsEncrypt or someone else


> [!warning] While this allows [[HTTPS]], the certificate will not be trusted and thus there will be warnings by browsers.




```shell
mkdir -p certs
openssl req -x509 -nodes -days 365 -newkey rsa:2048 -keyout ./certs/mycert.key -out ./certs/mysert.crt

```

