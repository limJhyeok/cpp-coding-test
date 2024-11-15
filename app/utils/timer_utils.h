#ifndef TIMER_UTILS_H
#define TIMER_UTILS_H

#include <chrono>
#include <functional>
#include <iostream>

double measureAverageExecutionTime(const std::function<void()>& func,
                                   int iterations) {
  double totalDuration = 0.0;

  for (int i = 0; i < iterations; ++i) {
    auto start = std::chrono::high_resolution_clock::now();

    func();  // 측정할 함수 실행

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = end - start;
    totalDuration += elapsed.count();
  }

  return totalDuration / iterations;  // 평균 실행 시간 반환
}

void compareFunctionSpeeds(const std::function<void()>& func1,
                           const std::function<void()>& func2, int iterations) {
  // 각 함수의 평균 실행 시간 측정
  double averageTimeFunc1 = measureAverageExecutionTime(func1, iterations);
  double averageTimeFunc2 = measureAverageExecutionTime(func2, iterations);

  // 속도 비교
  double speedup = (averageTimeFunc2 > averageTimeFunc1)
                       ? (averageTimeFunc2 / averageTimeFunc1)
                       : (averageTimeFunc1 / averageTimeFunc2);

  std::cout << "Average execution time of func1 over " << iterations
            << " iterations: " << averageTimeFunc1 << " seconds\n";
  std::cout << "Average execution time of func2 over " << iterations
            << " iterations: " << averageTimeFunc2 << " seconds\n";

  if (averageTimeFunc1 < averageTimeFunc2) {
    std::cout << "func1 is " << speedup << " times faster than func2.\n";
  } else {
    std::cout << "func2 is " << speedup << " times faster than func1.\n";
  }
}

#endif