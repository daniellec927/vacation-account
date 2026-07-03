# Vacation Account (C++)

A C++ program modeling a "vacation account" whose balance accrues from
qualifying blood donations. Each valid donation adds credit to the account.

## Classes
- **BloodDonation** (`VA_BloodDonation.h` / `.cpp`) — a donation record: donor
  ID, age, and weight, with validation of the inputs.
- **VacationAccount** (`VA_VacationAccount.h` / `.cpp`) — an account tied to an
  ID: tracks a balance and adds vacation credit from valid donations whose ID
  matches the account.
- `VA_main.cpp` — assertion-based test driver.

## Build & Run
```bash
g++ -std=c++17 VA_main.cpp VA_BloodDonation.cpp VA_VacationAccount.cpp -o va
./va
```
