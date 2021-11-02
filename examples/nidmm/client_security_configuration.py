import os
import json

CERTIFICATE_DIRECTORY = "../certs/"
DEFAULT_CLIENT_CONFIG_FILE = "../example_client_config.json"

class ClientSecurityConfigurationParser:
    def __init__(self, config_file_path : str = DEFAULT_CLIENT_CONFIG_FILE):
        with open(config_file_path, 'r') as jsf:
            config_file = json.load(jsf)
            self.client_cert = config_file["security"]["client_cert"]
            self.client_key = config_file["security"]["client_key"]
            self.root_cert = config_file["security"]["root_cert"]

    def get_client_cert(self):
        client_cert_path = os.path.join(CERTIFICATE_DIRECTORY, self.client_cert)
        with open(client_cert_path, 'rb') as f:
            client_cert_val = f.read()

        return client_cert_val

    def get_client_key(self):
        client_key_path = os.path.join(CERTIFICATE_DIRECTORY, self.client_key)
        with open(client_key_path, 'rb') as f:
            client_key_val = f.read()

        return client_key_val

    def get_root_cert(self):
        root_cert_path = os.path.join(CERTIFICATE_DIRECTORY, self.root_cert)
        with open(root_cert_path, 'rb') as f:
            root_cert_val = f.read()

        return root_cert_val

