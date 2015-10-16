
import Erg_pb2
import sys
import zmq

#  Socket to talk to server
context = zmq.Context()
socket = context.socket(zmq.SUB)

print("Connecting to Publisher")
socket.connect("tcp://localhost:5556")

#Subscribe to the right envelope
# Ascii bytes to unicode str is needed here
envelope = "EasyErgsocket"
if isinstance(envelope, bytes):
    envelope = envelope.decode('ascii')
socket.setsockopt_string(zmq.SUBSCRIBE, envelope)

while True:
    currentMessage = socket.recv_multipart()
    erg = Erg_pb2.Erg()
    erg.ParseFromString(currentMessage[1])
    print erg.displayedMeters
