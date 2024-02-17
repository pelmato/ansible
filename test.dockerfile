FROM debian:stable

RUN apt-get update && apt-get upgrade -y

RUN apt-get install -y openssh-server python3 sudo

RUN useradd -ms /bin/bash toto && echo "toto:toto" | chpasswd && adduser toto sudo

RUN echo 'toto ALL=(ALL) NOPASSWD:ALL' >> /etc/sudoers

EXPOSE 22

RUN mkdir -p /run/sshd

CMD ["/usr/sbin/sshd", "-D", "-e"]
