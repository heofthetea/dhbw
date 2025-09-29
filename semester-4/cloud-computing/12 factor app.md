> Heuristic factors that make apps suitable for [[Cloud]] nativity

1. **Codebase** - a singular codebase checked into [[Git|VCS]]
2. **Dependencies** - use dependency managers like [[Maven]]
3. **Configuration** - use [[Environment Variable|env variables]] for everything varying across environments
4. **Backing services** - use external [[Service|services]] for [[Datenbank|Databases]] etc.
5. **Build, release, run** - treat build, release and run stages as individual [[Function|functional]] components with [[Immutability|immutable]] output
6. **Process** - app runs as one or more [[Stateless]] [[Prozess|processes]] - state exists only in external services
7. **Port binding** - Every independent app is communicated with only through [[TCP]] [[Docker Port Binding|Ports]]
8. **Concurrency** - [[Horizontal Scaling]] by starting multiple app [[Prozess|processes]] using the [[Betriebssystem|Operating System]] 
9. **Disposability** - each app [[Prozess]] can be stopped and started at a moment's notice
10. **Dev/prod parity** - production, staging and development should be as similar as possible
11. **Logs** - Logs are event streams - log file management is done through exterenal service
12. **Admin processes** - Management tasks should run in same environment as the app ([[Python REPL|REPL]])

