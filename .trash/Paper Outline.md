> This is a simple outline of the paper, written in Obsidian/Markdown, because I can't be bothered. Who knows, maybe I'll actually write the paper here as well and then transcribe it into Latex later on... Depends on how FUCKING FRUSTRATED I'LL BE WHEN IT COMES TO ACTUALLY WRITING THE STUPID THING

**Headlines serve orientational purposes and are subject to change in the actual paper**
(I'll not throw this categorization into the paper, just use it here to kinda structure it against the outline I was given)
```table-of-contents
title: 
style: nestedList # TOC style (nestedList|inlineFirstLevel)
minLevel: 0 # Include headings from the specified level
maxLevel: 0 # Include headings up to the specified level
includeLinks: true # Make headings clickable
debugInConsole: false # Print debug info in Obsidian console
```
## 1. Abstract
--> take what you already submitted, translate and maybe bloat a bit😄

> "10 - 20% of the work" --> HOLY FUCKING SHIT BLOAT THIS A LOT
> aight let's work step-by-step with that [[Beispielgliederung Praxisbericht-1|outline]] provided in the Seminary

1. Talk about Setup of Operating Systems/Servers in general ig 
2. _This_ is where we talk about The TRÄP, what a Honeypot is etc.
3. _Is State_: Installing the thing manually sucks ass
4. The Installation still sucks ass??? just formulated differently
5. _Should-State_: (this terminology is by no means translated correctly)
6. What I'll actually do to fix this
	1. idea of pre-loading the ISO with a whole bunch of shit

## State of the Art
### Requirements for the Project
- what needs to go where
- which packages need to be installed
- configuration of networks etc
- Services need to be launched on startup etc
### Relevant tools
- Docker / Docker compose
- Network configuration (LAN Ports)
- bash (in case I need extra bloating)

### Possible Solutions
#### Ansible
- probably most used
- shines most when _managing_ servers, especially larger ones
#### ISO
- "classic" and straight-forward way of installing operating systems
- how does an ISO work (_Excerption needed_)
##### live build
- Tool used by the debian team to build their releases 
- offers full automatization of ISO creation process
##### cloning software like Penguins Eggs
> In case I need extra bloating

- essentially a cloning station but with the added overhead of creating an ISO lol
#### Cloning Station
- How does a cloning station work
- is pretty stupid because it requires opening the rack (==> [[#ISO vs. Ansible vs Cloning Station]])

## Main Part

### ISO vs. Ansible vs Cloning Station
> Excerption needed

*Task*: Successfully make it seem like Ansible is an absolutely idiotic suggestion for an alternative and the ISO has been chosen as the one and only solution that could ever exist to this problem with full knowledge beforehand #dummschwätzen
(that cloning stations are an inflexible piece of garbage is kinda self-explainatory, but still provides adequate bloating material)

### Installing Packages
#### Docker with different APT repository as "special challenge"
- explain what the fuck an apt repository is
-  [[Persist packages from live disk]] - argue that using live-build additional repositories causes a circular dependency, meaning yeeting the filesystem.packages-remove is the only way xd

### Files
> should be rather short, but is bloatable to a certain extent if I need extra bloating
- go over chroot functionality of live-build

### The Role of Startup Scripts
- How do the startup scripts work (_Excerption needed_)
- what tasks have to be put in the startup scripts

### Pre-Seeding
- what it does and why
[[Preseed file]]

### Gitlab Pipeline

#### Docker Container to build the ISO because of pipeline architecture restrictions
_if_ the pipeline even ends up building the ISO after all

#### where put ISO
> Excerption needed

BRO I DON'T FUCKING KNOW STOP TRYING TO HAVE ME DECIDE THAT I ALREADY HAVE ENOUGH EXISTENTIAL CRISES WITHOUT THAT

[[where to put the ISO]]

## Summary
### ISO already used to set up servers
- ISOs have already been used to setup first wave of TRÄPs that will be shipped

### Critical Reflection: Still necessity for keyboard + monitor input
- Critical reflection: Still necessity for at least a keyboard conected (for 3 inputs total), and even though possibility to "guess" when to enter what input exists, is still sub-optimal
	- Discussing potential solutions for this might lead to having to alter the firmware/bios of the thing (not very viable lol)

### Outlook
Potential to use PXE to install the ISO over a network --> solves the issue of needing to do hook up the server to more than power


