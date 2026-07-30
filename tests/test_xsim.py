# Copyright 2025 XMOS LIMITED.
# This Software is subject to the terms of the XMOS Public Licence: Version 1.

from pathlib import Path
import subprocess
import sys

def test_xsim_sha2():
    bin_path = Path(__file__).parent / "test_pr" / "bin"
    outfile = bin_path / "out.bin"
    data = message.encode()
    with open(infile, "wb") as fd:
        fd.write(data)
    run_cmd = "xsim " + "--args " +  str(bin_path) + f"/test_pr.xe " + str(infile) + " " + str(outfile)
    stdout = subprocess.check_output(run_cmd, cwd = bin_path, shell = True)
    with open(outfile, "rb") as fd:
        pass_str = fd.read()
    print(stdout)
    assert(b'PASS' == pass_str)
