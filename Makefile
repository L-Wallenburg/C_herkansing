.PHONY: clean All

All:
	@echo "----------Building project:[ opdr_4_5 - Debug ]----------"
	@cd "opdr_4_5" && "$(MAKE)" -f  "opdr_4_5.mk"
clean:
	@echo "----------Cleaning project:[ opdr_4_5 - Debug ]----------"
	@cd "opdr_4_5" && "$(MAKE)" -f  "opdr_4_5.mk" clean
