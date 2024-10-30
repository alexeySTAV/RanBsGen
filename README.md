# **Random Bullshit Generator** 
# **bsgen**  
*A lightweight CLI utility for generating random strings with customizable options.*

---

## **Table of Contents**
1. [About](#about)
2. [Features](#features)
3. [Installation](#installation)
4. [Usage](#usage)
5. [Examples](#examples)
6. [Contributing](#contributing)
7. [License](#license)

---

### **About**
`bsgen` is a command-line utility that generates random strings with customizable length and content options. It’s designed for developers and testers needing quick, flexible string generation for testing environments or automation scripts.

### **Features**
- **Flexible String Composition**: Include uppercase letters, numbers, and special characters.
- **Customizable Length**: Set any string length for generated strings.
- **CLI Integration**: Built to fit seamlessly into scripts and CLI workflows.

### **Installation**
1. **Clone the repository:**
   ```bash
   git clone https://github.com/alexeySTAV/RanBsGen.git
   cd RanBsGen
   ```
2. **Install it using make:**
  ```bash
  make
  sudo make install 
  ```
3. **Confirm installation:**
  ```bash
  bsgen --help
```
### **Usage** 
```bash
bsgen [options]
```
By default, bsgen generates a 16 characters long string consisting of only lowercase letters.
To add uppercase letters, special characters, numbers or alternate the string's length, add flags.

** -u   --upper** Add uppercase letters.

** -c   --characters** Add special characters.

** -n   --numbers** Add numbers.

** -l   --length** Specify desired length.

### **Examples**

Generate a 12 characters long lowercase letters string:
```bash
bsgen -l 12
#Output: a 12 characters long random string (e.g. "qlisuxnvpnjg")
```
Generate a random string, consisting of upper and lowercase letters, numbers and special characters:
```bash
bsgen -unc
#Output: a 16 characters long random string, consisting of upper and lowercase letters,
#numbers and special characters (e.g. "3xI9iFr)]f[J&P3=")
```
### **Contributing**
Contributors and new features are warmly welcome! 
To contribute to the project, follow the steps below:

1. Fork the project.

2. Create your feature branch:
```bash
git checkout -b feature/your-feature
```
3. Commit your changes:
```bash
git commit -m "Added xyz"
```
4. Push your changes:
```bash
git push origin feature/your-feature
```
5. Open a pull request.

### **License**
This project is licensed under the MIT License - see the LICENSE file for details.
