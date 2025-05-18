# Pasos para usar GITHUB 👾

## 1. Instalar Git Bash ⬇️

Dirígete al siguiente enlace e instala Git para tu sistema operativo:

🔗 [Git Downloads](https://git-scm.com/downloads)

---

## 2. Vincular con tu cuenta de GitHub 🔌

### 2.1 Configurar el nombre de usuario ⚙️

Abre Git Bash y ejecuta el siguiente comando (reemplaza `"TuNombreDeUsuario"` con tu nombre de usuario real):

```bash
git config --global user.name "TuNombreDeUsuario"
```


### 2.2 Configurar el correo electronico ⚙️

Igualmente dentro de Git Bash, ejecuta el siguiente comando (reemplaza `"tuemail@example.com"` con tu email de GITHUB):

```bash
git config --global user.email "tuemail@example.com"
```

Tip: Verifica tu configuración con:
```bash
git config --list
```

---
## 3. Si tienes un proyecto creado y quieres subirlo a GitHub ☁️

### 📌 Pasos en GitHub:

#### 3.1 Crea un nuevo repositorio en tu cuenta

#### 3.2 No inicialices con README.md (deja esta opción sin marcar)

#### 3.3 Elige si será público o privado

#### 3.4 Haz clic en "Create repository"

### 💻 Pasos en tu terminal:

```bash
# Inicializa Git en tu proyecto
git init

# Añade todos los archivos al área de staging
git add .

# Crea tu primer commit (mensaje descriptivo)
git commit -m "Mi primer commit"

# Cambia el nombre de la rama principal (opcional)
git branch -M main

# Conecta con tu repositorio remoto
git remote add origin https://github.com/tuUsuario/nombreRepo.git

# Sube los cambios a GitHub
git push -u origin main
```
---
## 4. Flujo de trabajo básico 🔄

```bash
# 1. Añade los cambios
git add .

# 2. Guarda los cambios con un mensaje claro
git commit -m "Descripción breve de los cambios"

# 3. Sube los cambios a GitHub
git push
```
---
## 5. Clonar Repositorio 🧬

```bash
git clone https://github.com/usuario/repo.git
cd repo
```
---
## 6 .Manejo de ramas básicas 🌱
```bash
# Lista ramas
git branch

# Crea rama              
git branch nueva-rama

# Cambia a rama
git checkout nueva-rama

# Fusiona ramas
git merge rama            
```
> ### 💡 **Consejos adicionales**
>
> #### 🔄 **Haz `git pull` antes de trabajar** para tener la versión más actualizada.
>
> #### 🌱 **Explora ramas** (`git branch`) cuando domines lo básico.
>
> #### ❓ **Usa `git --help`** cuando tengas dudas.


<p align="center">
  <img src="https://github.com/user-attachments/assets/62a89b84-dead-4e32-bd2e-199fdcc5debe" alt="Descripción de la imagen">
</p>
