import uvicorn

import json
f = open('../crashblox/config.json')

data = json.load(f)


if __name__ == "__main__":
    uvicorn.run("app.app:app", host=data['hostAddress'], log_level="info")
