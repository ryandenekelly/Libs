#pragma once

class EmaFilter
{
    public:
	EmaFilter(float alpha);
	float run(float input);

    private:
	float m_alpha;
	float m_lastOutput;

};
