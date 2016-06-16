.PHONY: clean All

All:
	@echo "----------Building project:[ opdr_4_1 - Debug ]----------"
	@cd "opdr_4_1" && "$(MAKE)" -f  "opdr_4_1.mk"
clean:
	@echo "----------Cleaning project:[ opdr_4_1 - Debug ]----------"
	@cd "opdr_4_1" && "$(MAKE)" -f  "opdr_4_1.mk" clean
