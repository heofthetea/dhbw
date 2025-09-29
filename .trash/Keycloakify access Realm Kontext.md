[[Keycloak Realm]], [[Keycloakify]]


source: https://www.youtube.com/watch?v=WdSPrpFObhg

![[Pasted image 20250626150304.png]]
## Steps
#### 1. install patch-package
```bash
npm i -D patch-package
```

#### 2. edit [[FTL]] script in the keycloakify bin
```bash
find . -name kcContextDeclarationTemplate.ftl | xargs code
```


#### 3. Remove the exception responsible for removing the realm information
- remove the following line (last I checked its line $262f$)
```ftl
|| (
	key == "attributes" &&
	areSamePath(path, ["realm"])
)
```

#### 3.2 Except that doesn't work
- instead: Manually add to the kcContext attribute after the `toJsDeclarationString` [[Function]] runs through:
```diff
kcContext.ftlTemplateFileName = "${xKeycloakify.ftlTemplateFileName}";
+kcContext.realm.terms = "${realm.attributes.terms!"No terms defined"}";
```

#### 3.3 actual solution for all attributes
```ftl
 <#if (key == "realmAttributes") || (key == "attributes" && areSamePath(path, ["realm"]))>
	<#assign localAttributes = object[key]>
	<#assign newAttributes = {}>
	<#list localAttributes?keys as attributeKey>
	    <#if !attributeKey?starts_with("easycloak_") >
		<#continue>
	    </#if>
	    <#assign newAttributes = newAttributes + { attributeKey : localAttributes[attributeKey]}>
	</#list>
	<#local recOut = toJsDeclarationString(newAttributes, path + [ key ])>
	<#local outSeq += ['"' + key + '": ' + recOut + ","]>
	<#continue>
</#if>
```

> [!warning] Insert this right before the gigantic if statement. Also do [[#3. Remove the exception responsible for removing the realm information|3.]] nevertheless
#### 4. patch package
```bash
npx patch-package keycloakify
```


---
- [[kcContextDeclaration PseudoCode]]