#!/bin/bash

# Remove todos os arquivos .txt do repositório Git
git rm -r --cached "*.txt"
git commit -m "Remover arquivos .txt"

# Adiciona a regra no .gitignore para ignorar os arquivos .txt
echo "*.txt" >> .gitignore
git add .gitignore
git commit -m "Adicionar regra para ignorar arquivos .txt"
