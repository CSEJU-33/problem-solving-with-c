
# Problem Solving with C by M.T Somashekara

## ℹ️ About 

This repository is a collection of problem solutions and example files from the book *Problem Solving with C* by M.T. Somashekara, tailored specifically for students of the Department of Computer Science and Engineering at Jahangirnagar University. Created by **CSE-33 batch** of Jahangirnagar University, this repository is designed to support students with their assignments, practice exercises, and coding skills in C programming. We hope it serves as a valuable resource in your journey to mastering C programming! ✨

Thank you for exploring our repository, and happy coding! 😊

*— CSE-33, Jahangirnagar University*


## 🚀 Getting Started
Assuming that you are complete begginer in comuputer science we will be starting with git and github setup.

### Installing Git

1. **Download Git:**
   - [Download Git](https://git-scm.com/downloads) and follow the installation instructions for your OS.

2. **Verify Installation:**
   ```bash
   git --version
   ```
3. **Configure global Email and Username**

   ```bash
   git config --global user.name "Your Name"
   ```
   
   ```bash
   git config --global user.email "your.email@example.com"
   ```
### Cloning the Repository

1. **Open a Terminal or Command Prompt.**

2. **Navigate to the desired directory** (optional):
   ```bash
   cd path/to/your/directory
   ```

3. **Clone the Repository:**  
   ```bash
   git clone https://github.com/CSEJU-33/problem-solving-with-c
   ```

4. **Enter the Repository Folder:**
   ```bash
   cd problem-solving-with-c
   ```

That's it! You've cloned the repository and are ready to start.


## 🖥️ Opening the Project in Your IDE

To start working with the code files, you can open the project in any of the following IDEs:

### 1. Embarcadero Dev-C++

1. **Open Dev-C++.**
2. **Go to `File > Open Project`** or simply press `Ctrl + O`.
3. Navigate to the folder where you cloned the repository and open the `.c` files you want to work with.

### 2. Code::Blocks

1. **Open Code::Blocks.**
2. **Go to `File > Open`** and select a `.c` file from the repository folder.
3. To start a new project with this code, you can also go to `File > New > Project`, choose "Console Application," and use the `.c` files in the cloned folder.

### 3. Visual Studio Code (VS Code)

1. **Open VS Code.**
2. **Go to `File > Open Folder...`** and select the repository folder where you cloned this project.
3. Install the **C/C++ extension** by Microsoft if you haven’t already, to enable C code support.
   - Go to the Extensions tab (`Ctrl + Shift + X`), search for "C/C++," and install it.
4. Open any `.c` file to start editing.

## 🌱 Contribution Guide

Contributions are welcome! To keep the project organized, please follow these steps:

1. **Fork the Repository:**
   - Click on the "Fork" button at the top of the repository page to create a copy in your GitHub account.

2. **Clone Your Forked Repository:**
   ```bash
   git clone https://github.com/your-username/problem-solving-with-c
   ```

3. **Create a New Branch:**
   - Use a branch name that indicates the chapter you’re working on.
   ```bash
   git checkout -b chapter-1
   ```

4. **Add Your Code Files:**
   - Create code files for the solutions in the corresponding chapter folder, or add new `.c` files if they don’t exist.
   
5. **Commit Your Changes:**
   ```bash
   git add .
   git commit -m "Added solutions for Chapter 1"
   ```

6. **Push Your Changes to GitHub:**
   ```bash
   git push origin chapter-1
   ```

7. **Create a Pull Request:**
   - Merge main onto `your-branch-name` before creating pull request to avoid merge conflicts.
   - Go to the original repository on GitHub and click on "Compare & pull request with `main` branch as base"
   - Provide a clear description of the solutions or examples you’re adding.

9. **Wait for Review:**
   - We will review your pull request to verify your code. Once approved, it will be merged into the main branch.
Here's an additional section for creating and managing issues, as well as guiding PRs linked to specific issues:

## 🐛 Creating Issues

If you find a bug in the code or want to request an enhancement or new solution, you can create an issue to let us know! Here’s how to do it:

1. **Go to the Issues Tab:**
   - On the main repository page, click on the "Issues" tab.

2. **Create a New Issue:**
   - Click on the "New Issue" button.

3. **Choose a Clear and Descriptive Title:**
   - Use a unique and specific title that clearly explains the issue. For example:
     - "Error in Chapter 9 Exercise 1 solution"
     - "Improvement for Chapter 3 Example 2 code structure"

4. **Describe the Issue in Detail:**
   - Clearly explain the problem or improvement you’re suggesting. Include:
     - The file name and location of the code in question.
     - A description of the issue (e.g., error message, incorrect output).
     - Any relevant code snippets, screenshots, or steps to reproduce the problem.

5. **Submit the Issue:**
   - Once all information is added, submit the issue for review.

## 🔄 Creating a Pull Request for an Issue

If you'd like to fix an open issue, follow these steps to submit a PR:

1. **Check for Existing Issues:**
   - Go to the "Issues" tab to see if the issue already exists. If you find it, you can start working on it. If not, feel free to create a new issue (following the steps above).

2. **Create a New Branch with a Relevant Name:**
   - Use the naming convention based on the issue type:
     - For exercises: `ch-9-exc-1`
     - For examples: `ch-9-exm-1`
   - Example command:
     ```bash
     git checkout -b ch-9-exc-1
     ```

3. **Add and Commit Your Changes:**
   - Implement your fix or improvement, and commit the changes.
   ```bash
   git add .
   git commit -m "Fix for Chapter 9 Exercise 1"
   ```

4. **Push Your Changes to GitHub:**
   ```bash
   git push origin ch-9-exc-1
   ```

5. **Create a Pull Request Linked to the Issue:**
   - Go to the original repository on GitHub and click on "Compare & pull request."
   - In the PR description, include the issue number by referencing it with `#issue-number` (e.g., `Fixes #12`).
   - Provide a short description of your solution and how it addresses the issue.

6. **Submit the Pull Request:**
   - Once the PR is submitted, we’ll review it. If the solution is correct, it will be merged into the main branch.

Thank you for contributing to this repository! Happy coding 🎉





