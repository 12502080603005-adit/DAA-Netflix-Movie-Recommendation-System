# Netflix Movie Recommendation System — C++

## Description

This repository contains a C++ project based on **How Netflix Recommends Movies — The Role of Algorithms**.

The project demonstrates a basic movie recommendation system that suggests movies based on the user's preferred genre. It uses a collection of movies with their names, genres, and ratings to display relevant recommendations.

The project demonstrates fundamental C++ programming concepts and the basic idea of a content-based recommendation system.

## Features

* Displays available movie genres.
* Allows users to select their preferred genre.
* Recommends movies based on the selected genre.
* Displays movie names, genres, and ratings.
* Handles invalid menu choices.
* Provides a simple, user-friendly console interface.

## Folder Structure

```text
Netflix-Movie-Recommendation-System/
│
├── NetflixRecommendation.cpp
├── README.md
├── report.pdf
└── .gitignore
```

## Technologies Used

* **Programming Language:** C++
* **Concepts:** Structures, Vectors, Functions, Loops, Conditional Statements, Switch Statements, and String Manipulation.
* **Compiler:** GCC / G++

## How to Run

### Step 1: Clone the Repository

```bash
git clone YOUR_REPOSITORY_URL
```

### Step 2: Open the Project Folder

```bash
cd Netflix-Movie-Recommendation-System
```

### Step 3: Compile the Program

```bash
g++ NetflixRecommendation.cpp -o NetflixRecommendation
```

### Step 4: Run the Program

On Windows:

```bash
NetflixRecommendation.exe
```

On Linux or macOS:

```bash
./NetflixRecommendation
```

## Sample Output

```text
========================================
    NETFLIX MOVIE RECOMMENDATION SYSTEM
========================================

Choose Your Preferred Genre:
1. Sci-Fi
2. Action
3. Comedy
4. Horror
5. Romance

Enter your choice (1-5): 1

Your Preferred Genre: Sci-Fi

========================================
       RECOMMENDED MOVIES
========================================

Movie Name : Inception
Genre      : Sci-Fi
Rating     : 8.8/10

Movie Name : Interstellar
Genre      : Sci-Fi
Rating     : 8.7/10

Movie Name : The Matrix
Genre      : Sci-Fi
Rating     : 8.7/10
```

## Project Objective

The objective of this project is to understand how algorithms can be used to recommend movies based on user preferences and to implement a simple recommendation system using C++.

## Note

This project is an educational demonstration of genre-based movie recommendations. It does not implement Netflix's actual recommendation algorithm.

## Author

**Name:** Parmar Dwija
**Course:** BTECH Information Technology
**Institute:** A D Patel Institute of Technology (ADIT)
