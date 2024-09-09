https://intension-de.atlassian.net/wiki/x/EwABtQ

Latex tends to be quite powerful, however is an absolute pain in the ass to install and took me somewhere around 2 days to fully get working (although I probably could have been faster, if I had put a bit more effort into research and less-so relying on trial-and-error…)

## Installing the base package

Theoretically, there are a bunch of latex packages available through the apt package manager. However, these are (as of April 2024) still on their 2021 versions and generally offer limitied functionality - The latex-own tlmgr package manager for example does not work out of the box with these packages and needs some amount of extra configuration.

The way I found to work best is via the Perl installer. It’s some terminal work, but since you have chosen to be a computer science student, that should not scare you away :)

_(if you are using arch, btw: The AUR packages are more up to date, and also work a lot better than the debian ones.)_

### Setting up the filesystem

First, create a directory for where you’ll store all your Latex packages. You could theoretically use any location, but I’d recommend to stick to some loose UNIX filesystem standard:

```bash
sudo mkdir ~/.local/share/texlive
```

### Installing the installer

This really is pretty straight forward. I’ll throw the installer in the /tmp directory, but really you can put it wherever you want.

```bash
mkdir /tmp/texlive
cd /tmp/texlive
wget http://mirror.ctan.org/systems/texlive/tlnet/install-tl.zip
unzip ./install-tl.zip
```

### The installer

You can now run the installer by cd’ing into the directory that got created by the unzip operation, and then running the installer through perl:

```bash
cd install-tl/install-tl-$(date +%Y%m%d)
sudo perl ./install-tl
```

Perl should be installed by default on ubuntu machines.

Once having run the installer, you will be greeted with a CLI. It is pretty straight forward - and you could directly start the installation. however, I’d suggest you first configure, which scheme (think “size”) of the Latex bundle you want to install.  
The installer defaults to full, which takes up a solid 10GB of disk space and roughly 30 minutes to install, and contains a whole bunch of stuff you really don't need, or can install afterwards _anyway_. I myself went for teTex scheme which seems a good middle ground between "bare-bones" and "too much".

```
Select scheme:

 a [ ] full scheme (everything)
 b [ ] medium scheme (small + more packages and languages)
 c [ ] small scheme (basic + xetex, metapost, a few languages)
 d [ ] basic scheme (plain and latex)
 e [ ] minimal scheme (plain only)
 f [ ] infrastructure-only scheme (no TeX at all)
 g [ ] book publishing scheme (core LaTeX and add-ons)
 h [ ] ConTeXt scheme
 i [ ] GUST TeX Live scheme
 j [X] teTeX scheme (more than medium, but nowhere near full)
 k [ ] custom selection of collections
```

Now - we wait. This package needs roughly 10 minutes to install. Go make yourself a coffee or something.

### Add binaries to PATH

Since all your binaries now live in a subdirectory of the folder you created in the very beginning, their not on PATH. You probably know how to add paths to PATH, but still, here’s some code:

For your current session:

```bash
export PATH=$PATH:~/.local/share/texlive/$(date +%Y)/bin/x86_64-linux
```

To make it permanent, put the same line (without the export) in your ~/.profile file.

## Further Packages

You should have a functional version of Latex installed on your system now. You can go get a hello-world file from somewhere and try to compile it, it should work.

For the [intension Latex template](https://gitlab.com/intension/dhbw/templates/latex-template) though, you’ll need a few more packages. You can install these via the TexLive-Manager tlmgr. Here’s a list of packages (from memory, you might need a few more, but you will be prompted for them when you try to compile the template):

```bash
tlmgr install biblatex biber latexmk biblatex-ieee csquotes glossaries
```

The last package is the one for citations in the IEEE style. That caused me a _lot_ of headaches to figure out :,)

---

Congrats, you’re done now!! I’d suggest you try and compile the intension Latex template, after setting up your VS Code Latex environment.  
Note that if you don’t cite anything, but still include the biblatex package in your Latex file, it will refuse to compile - because a warning appearantly wouldn’t have been enough. Simply comment out any lines that have to do anything with the package, until you have inserted your first citation.