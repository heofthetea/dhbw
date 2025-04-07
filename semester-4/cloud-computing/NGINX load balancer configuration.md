```nginx
events {
  worker_connections  1024;  ## Default: 1024  whos knows
}
http {
   upstream myapp1 {
      server web1:5000;  # the internal container port
      server web2:5000;  # the internal container port
    }

    server {
           listen 8080;
           location /count {
           proxy_pass http://myapp1;
         }
      }
}
```

