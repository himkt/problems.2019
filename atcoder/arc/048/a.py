# -*- coding: utf-8 -*-

from_stage, to_stage = map(int, input().split())

if from_stage * to_stage < 0:
    print(to_stage - from_stage - 1)
else:
    print(to_stage - from_stage)
