FROM python:3.10

WORKDIR /app
COPY . .
RUN pip install -r requirements.txt
EXPOSE 8000
CMD uvicorn app.app:app --host 0.0.0.0
