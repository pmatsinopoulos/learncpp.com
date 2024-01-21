#include <iostream>
#include <stack>
#include <functional>

// Operations that also turn an undo-lambda
auto add(int &state, int operand)
{
  state += operand;
  return [operand](int &state)
  { state -= operand; };
}

auto subtract(int &state, int operand)
{
  state -= operand;
  return [operand](int &state)
  { state += operand; };
}

auto multiply(int &state, int operand)
{
  int orig = state;
  state *= operand;
  return [operand, original = orig](int &state)
  {
    if (operand == 0)
    {
      state = original;
    }
    else
    {
      state /= operand;
    }
  };
}

auto divide(int &state, int operand)
{
  int orig = state;
  state /= operand;
  return [operand, rem = orig - state * operand](int &state)
  {
    state *= operand;
    state += rem;
  };
}

void printState(const int state)
{
  std::cout << "State = " << state << '\n';
}

int main()
{

  // apply operations and store the rollback in an std::stack.
  std::stack<std::function<void(int &)>> rollback;

  int state = 0;
  rollback.push(add(state, 10));
  printState(state);

  rollback.push(divide(state, 3));
  printState(state);

  rollback.top()(state);
  printState(state);

  rollback.pop();

  rollback.push(multiply(state, 2));
  printState(state);

  while (!rollback.empty())
  {
    rollback.top()(state);
    printState(state);
    rollback.pop();
  }

  return 0;
}
