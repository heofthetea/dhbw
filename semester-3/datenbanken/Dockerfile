FROM postgres:latest
# Installs german locale, but does not set it
RUN sed -i '/de_DE.UTF-8/s/^# //g' /etc/locale.gen && locale-gen

## Uncomment this to *set* the german locale
# ENV LANG=de_DE.UTF-8  
# ENV LANGUAGE=de_DE:de  
# ENV LC_ALL=de_DE.UTF-8     

