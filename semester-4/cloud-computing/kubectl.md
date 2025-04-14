> CLI to control [[Kubernetes]]

- everything that can be specified in [[Kubernetes]], can be configured using this CLI
- [[Imperative Programmiersprache|Imperative]] [[Kubernetes Objects|Object]] configuration:
	- Specify what [[Kubernetes]] should do
- [[Declarative Programming Language|declarative]] [[Kubernetes Objects|Object]] configuration:
	- `kubectl apply -f`
	- [[Kubernetes Control Plane]] compares desired state with actual [[Zustand|state]]
		- figures out on its own what it needs to do and applies those changes
		- similar to [[Terraform]]
