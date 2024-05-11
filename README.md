## CLASE 1
### ¿Cómo iniciar un proyecto de git?
Se crea un repositorio local con:

``git init <nombre-del-proyecto> ``

O iniciar en una carpeta ya existente , simplemente ir raíz del proyecto y poner.

`git init`

### Ayuda en git
Para resolver dudas de comandos de git, usamos:

`` git init -h``

si queremos información mas detallada podemos entrar a un articulo de git a través del navegador por medio de :

``git init --help``

### Estados de git
Cualquier archivo dentro de un directorio con git debe pasar por 3 estados:

+ **Modified**
+ **Staged**
+ **Commited**
------------------
**Modified**

Estado encargado de marcar todos los cambios que tiene un archivo sin confirmar.

Al crear un archivo dentro del directorio de git ya esta en un estado modified, también lo estará cuando lo eliminemos 

###### COMANDO PARA ELIMINAR ARCHIVO

``git rm <nombre-del-archivo>``

##### COMANDO PARA VER EL ESTADO DEL GIT

``git status``

##### COMANDO PARA RESTAURAR ARCHIVO
``git restore <nombre-del-archivo>``

**Staged**

Después de crear el archivo, debemos marcarlo para prepararlo para su confirmación en el repositorio 

##### COMANDO PARA CONFIRMAR
``
git add <nombre-del-archivo>
``

**Commited**

Este estado es para guardar los cambios de nuestro archivo, es decir es cuando nuestro archivo ya esta grabado en el repositorio local

##### COMANDO PARA GUARDAR CAMBIOS

``git commit <nombre-del-archivo>`` 

Para no tener que abrir el editor de codigo 

``git commit -m <el-mensaje-del-commit>”``

##### COMANDO PARA VER HISTORIAL DE COMMITS

``git log``

Para solo ver los títulos de los commits, sin autor ni fecha se usa

``git log --oneline``

para ver los commits como graficos utiilzamos

``git log –graph`` 

se puede combinar en un solo comando

``git log –graph –oneline``
