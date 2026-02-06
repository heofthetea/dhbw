> Web Server and Reverse Proxy and so much fucking more (most of all a pain in the ass)

[[Reverse Proxy]], [[RegEx]], [[HTTP]], [[HTTPS]]


## Config
- `http`: Defines everything regarding [[HTTP]] routing
- `http.server`: Defines [[Resource Server|Resource]] routes on the server, and what to do with them
- `upstream`: Define "aliases" for [[Service|services]] (prolly incorrect af but that's how I understand it)


```nginx
# <meta-config>
# only put that into the file when using inside docker, where we're both configuring the system-wide NGINX and the local connections

http {
	<meta-config>
	# define an upstream server (when using NGINX in docker)
	upstream test {
		server test:8080;
	}

	server {
		listen 80; # listens on port 80
		listen 443 ssl; # listens on port 443 with https

		server_name my.domain.com; # domain whuiiiiiii

		# 302 -> redirect
		location /hello {
            return 302 /hello/;
        }

		# proxies to other server, i.e. docker service
        location /hello/ {
            proxy_pass http://test/;
            proxy_set_header Host $host;
        }

		# match regex - behaves weird
		location ~ ^/pattern/.*$ {
			...
		}
	
	}

	
}
```
## Docker
```yml
  nginx:
    image: nginx:stable-alpine
    container_name: nginx
    ports:
      - "80:80"
      - "443:443"
    volumes:
      - ./nginx.conf:/etc/nginx/nginx.conf:ro
      # - ./certs:/etc/nginx/certs:ro
```

## Default Resource
```
cat /etc/nginx/sites-available/default
```

- this contains a default nginx configuration file, and for example certbot will leave an example in that file as well