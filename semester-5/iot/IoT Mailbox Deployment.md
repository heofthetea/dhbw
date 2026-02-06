
## VM Networking troubleshoot
- created a virtual subnet
- in `Networking > Security List`, add the following [[Ingress]] rules:

![[Pasted image 20251130151944.png]]

> [!error] hm okay apparently I cannot publish messages back to my local device (consumer-grade NAT?) but it's okay because we technically don't need it
> it's really fucking annoying tho I should have a look at it

## The project itself
- we're a bit fucked because the VM has an [[ARM]] VCPU and so the docker images don't work, I needed to rebuild the project on the VM

## DNS
- i registered `heofthetea.me`
- registered subdomain to this:

```dns
type: A
name: mailbox.oci
points to: 130.61.218.106
ttl: default
```

> [!error] Needs the iptables rules to be defined first.

```bash
# use --nginx to ensure that it works while the system-wide nginx is running
sudo certbot --nginx -d mailbox.oci.heofthetea.me
```
#### Output
```
Saving debug log to /var/log/letsencrypt/letsencrypt.log
Requesting a certificate for mailbox.oci.heofthetea.me

Successfully received certificate.
Certificate is saved at: /etc/letsencrypt/live/mailbox.oci.heofthetea.me/fullchain.pem
Key is saved at:         /etc/letsencrypt/live/mailbox.oci.heofthetea.me/privkey.pem
This certificate expires on 2026-02-28.
These files will be updated when the certificate renews.
Certbot has set up a scheduled task to automatically renew this certificate in the background.

- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
If you like Certbot, please consider supporting our work by:
 * Donating to ISRG / Let's Encrypt:   https://letsencrypt.org/donate
 * Donating to EFF:                    https://eff.org/donate-le
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

```

> [!hint] With the `--nginx`, the files are stored at /etc/nginx/sites-enabled/default

## iptables rules
- adds rules to the internal iptables config 
- somehow does magic so that let's encrypt can do its thing
```bash
sudo iptables -I INPUT -p tcp --dport 80 -j ACCEPT -m comment --comment "HTTP for Let's Encrypt"
sudo iptables -I INPUT -p tcp --dport 443 -j ACCEPT -m comment --comment "HTTPS"
sudo iptables -I INPUT -p tcp --dport 1883 -j ACCEPT -m comment --comment "MQTT"
```

> [!hint] This also allows outbound traffic for [[MQTT]].