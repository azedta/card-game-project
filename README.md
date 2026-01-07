# 🃏 C++ Card Game (Console) — Object-Oriented Design + Save/Load

A two-player **console-based card game** implemented in **C++** with a clean OOP architecture (factory, polymorphism, modular game components) and support for **saving and resuming** a game from disk.

This project demonstrates core software engineering skills in C++: **class design, memory/ownership handling, operator overloading, serialization, and gameplay state management**.

---

## ✨ What this project includes

- ✅ **Two-player CLI gameplay loop**
- ✅ **Deck / Hand / DiscardPile / TradeArea / Table / Player** modeled as separate components
- ✅ **Card type hierarchy** using polymorphism (`Card` base type + concrete card types)
- ✅ **CardFactory** singleton to create cards and generate a shuffled deck
- ✅ **Save & Load**: persist full game state to a file and resume later
- ✅ Rich console prompts for decision-making (chaining, trading, discarding, etc.)

---

## 🧠 Architecture Overview

High-level modules:

- **Card (polymorphic hierarchy)**  
  A base `Card` interface with multiple concrete card types (each with its own rules / value mapping).

- **CardFactory (singleton)**  
  Responsible for producing card instances and generating the game deck.

- **Deck**  
  Stores the draw pile and supports drawing / serialization.

- **Hand**  
  Queue-like hand behavior (draw to back, play from front), plus optional full-hand display.

- **TradeArea**  
  Temporary shared area where cards can be traded/claimed before chaining or discarding.

- **DiscardPile**  
  Stores discarded cards (with top-card access).

- **Player**  
  Tracks player name, coins, chains, and hand logic. Supports selling chains for coins.

- **Table**  
  Aggregates the full game state (players, deck, trade area, discard pile) and determines win condition.
  Also handles full-table printing and save/load reconstruction.

---

## 💾 Save / Resume

During gameplay, the program can prompt to **pause and save**.  
The full table state is serialized into a text file and can be loaded on the next run.

> Note: the current implementation writes to a fixed filename (e.g., `test.txt`) and loads from it.

---

## 🛠️ Build & Run

### Option A — Compile with g++
If your repo includes the matching header files (`*.h`) alongside the `.cpp` files:

```bash
g++ -std=c++17 -O2 main.cpp -o card-game
./card-game
