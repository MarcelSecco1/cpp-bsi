default:
	@read -p "Digite o nome do projeto: " PROJ_NAME; \
	g++ $$PROJ_NAME.cpp -o $$PROJ_NAME && ./$$PROJ_NAME

clean:
	@read -p "Digite o nome do projeto: " PROJ_NAME; \
	rm -rf $$PROJ_NAME