#include "EMA.hpp"

EmaFilter::EmaFilter(float alpha) : m_alpha(alpha), m_lastOutput(0.0) {}

float EmaFilter::run(float input)
{
    m_lastOutput = (m_alpha * input) + ((1 - m_alpha) * m_lastOutput);
    return m_lastOutput;
}

