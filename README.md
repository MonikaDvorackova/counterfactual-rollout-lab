# Counterfactual Rollout Lab

Compares a nonlinear reference environment with a misspecified learned transition model under fixed action interventions. Reports horizon-level accumulated state error.

Build using CMake and run `./build/rollout`. This makes model error visible across interventions; replace the hand-written model with learned dynamics for research experiments.
