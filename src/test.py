# Must use a delay when testing to simulate real-time input from the GPS device

import time

with open("/tmp/readgps-com1.in", "wb", buffering=0) as pipe:
    for byte in b"ABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGH\r\n":
        pipe.write(bytes([byte]))
        time.sleep(0.05)