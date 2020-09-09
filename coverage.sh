#!/bin/bash
if [ -d test_coverage ]; then
    rm test_coverage -rf
fi
lcov -c -d . -o log --rc lcov_branch_coverage=1
lcov -e log "*/include/util.hpp" "*/include/coverage.hpp" "*/src/*" -o tmp_log --rc lcov_branch_coverage=1
genhtml tmp_log -o test_coverage --rc lcov_branch_coverage=1
rm log tmp_log
